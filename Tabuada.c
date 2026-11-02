# include <stdio.h>

int main (){
    
    int nu, nu2, rep;
    
    printf("Qual tabuada você quer saber?\n");
    scanf("%d", &nu);
    
    printf("\nAté que número você quer calcular?\n");
    scanf("%d", &nu2);
    
    printf("\nA tabuda de %d até %d é:\n\n", nu, nu2);
    
    for (rep = 1; rep <= nu2; rep ++){
        printf("%d x %d = %d\n", nu, rep, rep * nu);
        
    }
    
    
    return 0;
}