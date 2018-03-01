#include <stdio.h>
#include <string.h>

int main (){
    char s[] = "Hallo world!";
    char word[] = "a";
    
    int s_len = strlen(s);  //dovjyna riadka
    int word_len = strlen(word);    //dovgyna slova
    int word_found = 0;   //zminna, iaka dorivniye 1, iakshcho slovo ie v riadku i 0, iakshcho nemaie
    
    for(int i = 0; s[i] != '\0' && s_len - i >= word_len; i++){     /*1. Perevirka vsih symvoliv riadka do iogo kincia
                                                                      2. Zupynka cikla, iakshcho do kincia riadka zalyshylos' menshe symvoliv, nizh u shukanomu slovi (nemaie sensu pereviriaty dali)*/
        if (s[i] == word[0]){     //Dyvymosia, chy symvol striky dorivniye pershomy symvolu shukanogo slova, shcob pochaty pereviriaty nastupni symvoly
            for(int j = 0; word[j] != '\0'; j++){    //Prohodymo po vsih symvolah slova
                if (word[j] != s[i + j]){      //Iakshcho 'i' element stroky dorivniye pershomu elementy slova, to pochynaiemo pereviriaty chy vsi nastupni elementy takozh rivni
                    break;      //Iakshcho slova rivni ne do kincia, vyhodymo z cyklu
                }
                if (j == word_len - 1){      //Porivniannia bukv. Iakshcho vony spivpadaiyt', zbil'shuiemo 'j' na 1, iakshcho 'j' == dovjyni slova - 1 (bo 'j' my vykorystovuvaly iak indeks), to znachyt', shcho slova rivni
                    printf("'%s' found in '%s' at index # %d \n", word, s, i + 1);
                    word_found = 1;
                }
            }
        }
    }
    if (word_found == 0){
        printf("-1\n");
    }
}