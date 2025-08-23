// importando a biblioteca
#include<stdio.h>

int main() {
// inserindo variaveis
	int num1, num2, num3, resultado;
	char operador;
	
// inserindo interação com o usuario
	printf("Digite 3 numeros inteiros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("\nUtilize os seguintes operadores validos: \n+ para adicao\n - para subtracao\n * para multiplicacao\n / para divisao\n");
	printf("\nAgora digite o operador: \n");
	scanf(" %c", &operador);
	
// para que o sistema entenda qual operador esta sendo usado
	switch (operador) {

	case '+':
		printf("\nVoce escolheu o operador de adicao!\n");
		resultado = num1 + num2 + num3;
		printf("O resultado e: %d\n",resultado);
		break;

	case '-':
		printf("\nVoce escolheu o operador de subtracao!\n");
		resultado = num1 - num2 - num3;
		printf("O resultado e: %d\n",resultado);
		break;

	case '*':
		printf("\n\nVoce escolheu o operador de multiplicacao!\n");
		resultado = num1 * num2 * num3;
		printf("O resultado e: %d\n",resultado);
		break;

	case '/':
		printf("\nVoce escolheu o operador de divisao!\n");
		if (num2 == 0 || num3 == 0) {
			printf("Erro: Divisao por zero nao e permitida.\n");
			return 1;
		}
		resultado = num1 / num2 / num3;
		printf("O resultado e: %d\n",resultado);
		break;

	default:
		printf("Operador invalido!\n");
		break;
	}
	
// para o sistema informar qual numero é o maior
	if (num1 > num2 && num1 > num3) {
		printf("\nO primeiro numero e maior que o segundo e que o terceiro: %d\n", num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("\nO segundo numero e maior que o primeiro e que o terceiro: %d\n", num2);
	}
	else if (num3 > num1 && num3 > num2) {
		printf("\nO terceiro numero e maior que o primeiro e que o segundo: %d\n", num3);
	}
	else {
		printf("\nos numeros sao iguais.\n");
	}
	
// para o sistema informar se o numero e par impar positivo ou negativo
	if (num1 % 2 == 0 && num1 > 0) {
		printf("\nO primeiro numero e par e positivo: %d\n", num1);
	} else if (num1 == 0) {
		printf("\nO primeiro numero e neutro: %d\n", num1);
	} else if (num1 % 2 == 0 && num1 < 0) {
		printf("\nO primeiro numero e par e negativo: %d\n", num1);
	} else if (num1 % 2 != 0 && num1 > 0) {
		printf("\nO primeiro numero e impar e positivo %d\n", num1);
	} else if (num1 % 2 != 0 && num1 < 0) {
		printf("\nO primeiro numero e impar e negativo %d\n", num1);
	} else {
		printf("\nO primeiro numero e impar e negativo: %d\n", num1);
	}

	if (num2 % 2 == 0 && num2 > 0) {
		printf("\nO segundo numero e par e positivo: %d\n", num2);
	} else if (num2 == 0) {
		printf("\nO segundo numero e neutro: %d\n", num2);
	} else if (num2 % 2 == 0 && num2 < 0) {
		printf("\nO segundo numero e par e negativo: %d\n", num2);
	} else if (num2 % 2 != 0 && num2 > 0) {
		printf("\nO segundo numero e impar e positivo %d\n", num2);
	} else if (num2 % 2 != 0 && num2 < 0) {
		printf("\nO segundo numero e impar e negativo %d\n", num2);
	} else {
		printf("O segundo numero e impar e negativo: %d\n", num2);
	}

	if (num3 % 2 == 0 && num3 > 0) {
		printf("\nO terceiro numero e par e positivo: %d\n", num3);
	} else if (num3 == 0) {
		printf("\nO terceiro numero e neutro: %d\n", num3);
	} else if (num3 % 2 == 0 && num3 < 0) {
		printf("\nO terceiro numero e par e negativo: %d\n", num3);
	} else if (num3 % 2 != 0 && num3 > 0) {
		printf("\nO terceiro numero e impar e positivo %d\n", num3);
	} else if (num3 % 2 != 0 && num3 < 0) {
		printf("\nO terceiro numero e impar e negativo %d\n", num3);
	} else {
		printf("\nO terceiro numero e impar e negativo: %d\n", num3);
	}
	
// para finalizar
	return 0;
}
//fim do programa