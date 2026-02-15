#include <stdio.h>
#include <string.h>

int main(){
    char senha_secreta[50] = "";
    while(strcmp(senha_secreta,"Arth2006") != 0){
        printf("Digite a senha: ");
        scanf("%s",senha_secreta);
    
        if(strcmp(senha_secreta, "Arth2006") == 0){
            printf("Senha correta!\n");
            
        }else{
            printf("Senha incorreta,tente novamente!\n");
        }
    }
    char usuario[50] = "Enzo";
    char senha[50] = "Enzo2006";
    char entrada_usuario[50];
    char entrada_senha[50];
    while(1){
        printf("Digite o usuario: ");
        scanf("%s",entrada_usuario);
        printf("Digite a senha:");
        scanf("%s",entrada_senha);
        if(strcmp(entrada_usuario, usuario) == 0 && strcmp(entrada_senha, senha) == 0){
            printf("Login bem-sucedido!\n");
            break;
        }else{
            printf("Usuario ou senha incorretos, tente novamente!\n");
        }
    }
    return 0;
}
    

