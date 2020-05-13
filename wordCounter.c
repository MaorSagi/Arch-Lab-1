#include <stdlib.h>

#include <stdio.h>

#include <string.h>





int main(int argc, char **argv) {

	int counter_1 = 0;

	int counter_2 = 0;

	int counter_3 = 0;

	int seperator = 1;

	int c = 0;

	int i = 0;

    int tmp = 0;

	while((c = fgetc(stdin)) != -1){

	    if(c==32 || c=='\t' || c=='\n' || c=='\v'){

	        seperator = 1;

                tmp=0;

	        continue;

	    }

	    else{

	        if(seperator){

	            seperator = 0;

	            counter_1++;

	            counter_2++;

	        }

	        else{

	            counter_2++;

	        }

	        tmp++;

	        if(tmp>counter_3)

	            counter_3=tmp;

	    }

	    



	}


        
        if(argc>1)

            for(i=1; i<argc; i++){

                if(strcmp(argv[i],"-w")==0)

                    printf("%d\n" , counter_1);

                if(strcmp(argv[i],"-c")==0)

                    printf("%d\n" , counter_2);

                if(strcmp(argv[i],"-l")==0)

                    printf("%d\n" , counter_3);

            }

        else

            printf("%d\n" , counter_1);

            

        



          

        



         

   

   

    return 0;

}

