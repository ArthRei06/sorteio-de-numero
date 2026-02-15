//revisando o codigo de  login e senha.
#include<stdio.h>
#include<string.h>
int main(){
    char senha_secreta[] = "";
    char senha_correta[50] = "Arth2006";
    while(strcmp(senha_secreta,senha_correta) != 0){
        printf("Digite a senha:");
        scanf("%s",senha_secreta);
        if(strcmp(senha_secreta,senha_correta) == 0){
            printf("Senha correta!\n");
            break;
        }else{
            printf("Senha incorreta,tente novamente!\n");
        }
    }
    return 0;
}