#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k-1];
}

/*
input: nguyen minh nhut
seperator: ' '
output: ["nguyen", "minh", "nhut"]
*/
char** slipstring(char *input, char separator)
{
    int size = 1;
    //allocate for return value
    char** ptr = (char**)malloc(size * sizeof(char*));
    //seperate for the first time
    //point to the first element in sequential data
    char* ptr_slip = strtok(input, &separator);
    //merge the first value into **ptr
    *ptr = ptr_slip;

    while (ptr_slip != NULL)
    {
        size++;
        //assign to lv2 pointer
        //allocate just 1 byte for first element in array pointer
        ptr = realloc(ptr, size * sizeof(char*));
        //seperate until it finish
        ptr_slip = strtok(NULL, &separator);
        //incase it is null the value below is assigned to null too
        //sequential in this array.
        ptr[size-1] = ptr_slip;
    }
    return ptr;
}

char**** get_document(char* text) 
{
//paragraph
    //document is *text so slip it we will have p_doc
    char** p_doc = slipstring(text, '\n');

    //find number of index value inside ptr/ array. That is sentence
    int p_count=0;
    while(p_doc[p_count] != NULL)
    {
        p_count++;
    }
    //declare document pointer as a return value and storing data in that
    char**** doc = (char****) malloc(sizeof(char***) * (p_count+1));

    doc[p_count] = NULL;

    int p_index = 0;
    while (p_doc[p_index] != NULL) // pointer is automation search until this catch NULL value.
    {
//sentence
        //Sliping sentence and store in that value
        char** s_doc = slipstring(p_doc[p_index], '.');
        //Number of sentence
        int s_count =0;
        while(s_doc[s_count] != NULL)
        {
            s_count++;
        }
        //declare size of parargaph base on size of sentence(element)
        doc[p_index] = (char***)malloc(sizeof(char**) *(s_count+1));

        doc[p_index][s_count] = NULL;

        int s_index = 0;
        while(s_doc[s_index] != NULL)
        {
//word, in this point doc[][] is a lv2 pointer
            doc[p_index][s_index] = slipstring(s_doc[s_index], ' ');
            s_index++;
        }
        p_index++;
    }
    return doc;
}

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }     
}