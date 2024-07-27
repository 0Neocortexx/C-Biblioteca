// Funcao que retorna o tamanho de qualquer array de char (string)
int lenght(char *str) {
    // define o contador 0;
    int i, len = 0; 
    // Enquanto o valor do array de char na posição do index for diferente de vazio    
    for(i = 0; str[i] != '\0'; i++) {
        // Se o valor do array de char na posição do index for diferente de espaço ele vai somar no contador
	if(str[i] != ' ') {
            len++;    
        }
    }
    return len;
}