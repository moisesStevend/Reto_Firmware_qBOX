#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define buffer 25            

char stack[buffer];
int arriba=-1;       

/*
push(char elem){                 
	int test=1;
    stack[++arriba]=elem;
}
 
int pop(){                     
    return(stack[top--]);
}
 
int pr(char symbol){                
    
	if(symbol == '+')
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')         
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
*/
char *remover_espacios(char *str);

int main(){
	

	//declaracion de variables
	int result;
	int max_size=5;
	char trama[max_size];
	
	//mensaje de ingreso de valores
	printf("Ingrese operación: ");
	
	//obtencion de valores
	fgets(trama,max_size,stdin);
	
	//se elimina los espacios
	remover_espacios(trama);
	printf("se ingresó: %s\n",trama);
	
	//saber cuantos operadores tiene
	int count=0;
	int pos;
	
	for(int i=0;i<max_size;i++){
		if(trama[i]=='+' || trama[i]=='-' || trama[i]=='*' || trama[i]=='/'){
			count++;
			//printf("%d",count);
			pos=i;
		}
	}
	
	//printf("pos %c %d\n",trama[pos], pos);
	
	int aux=0;
	
	
	if(count==1){
		switch (pos){
			case 0:
				printf("prefix\n");
				
				
				if(trama[pos]=='+'){
					
					for(int i=0;i<max_size;i++){
						
						
						if(pos!=i || trama[i]!='\n'){
							printf("caracter %c\n",trama[i]);
							
							aux=aux+((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='-'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux-((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='*'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux*((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='/'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux/((int)trama[i]-'0');
						}
					}		
				}
				
				result = aux;
				printf("result %d", result);
				break;
				
			case 1:
				printf("normal");
				if(trama[pos]=='+'){
					
					for(int i=0;i<max_size;i++){
						
						
						if(trama[i]!='+' || trama[i]!='\n'){
							//printf("caracter %c\n",trama[i]);
							
							aux=aux+((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='-'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux-((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='*'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux*((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='/'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux/((int)trama[i]-'0');
						}
					}		
				}
				
				result = aux;
				printf("result %d", result);
				break;
			case 2:
				printf("postfix");
				if(trama[pos]=='+'){
					
					for(int i=0;i<max_size;i++){
						
						
						if(trama[i]!='+' || trama[i]!='\n'){
							//printf("caracter %c\n",trama[i]);
							
							aux=aux+((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='-'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux-((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='*'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux*((int)trama[i]-'0');
						}
					}		
				}else if(trama[pos]=='/'){
					for(int i=0;i<max_size;i++){
						if(pos!=i){
							aux=aux/((int)trama[i]-'0');
						}
					}		
				}
				
				result = aux;
				printf("result %d", result);
				break;
			default:
				
				result = aux;
				printf("result %d", result);
				break;		
		}		
	}else if(count>1){
		printf("La operación no es infija, prefija ni postfija");		
	}
	
	
	//char tr1[20], tr2[20];
		
	//sscanf(trama,"%[^ ]%[^ ]", tr1,tr2);
	
	//printf("%s;%s",tr1,tr2);
}
 

char *remover_espacios(char *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return str;
}

/*
  		if(trama[pos]=='+'){
			for(int i=0;i<max_size;i++){
				if(pos!=i){
					aux=aux+trama[i];
				}
			}		
		}else if(trama[pos]=='-'){
			for(int i=0;i<max_size;i++){
				if(pos!=i){
					aux=aux+trama[i];
				}
			}		
		}
 */

/*
 * while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else
            if(isalnum(ch)) 
				postfix[k++]=ch;
            else
                if( ch == ')'){
                    while( stack[top] != '(')
                        postfix[k++]=pop();
                    elem=pop(); 
                }
                else{      
                    while( pr(stack[top]) >= pr(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
 * 
 * 
 * */
