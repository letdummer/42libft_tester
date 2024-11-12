#include "./include/libft_tests.h"
#include <stdio.h>

void press_enter_to_continue();
void print_test_index(int current_test, int total_tests);

int main(void)
{
	int total_tests = 32;
	int current_test = 1;

	printf("\nPressione ENTER para começar os testes.\n");
	getchar(); 

	print_test_index(current_test, total_tests);
	ft_atoi_test();
	press_enter_to_continue();
	current_test++;
  
	print_test_index(current_test, total_tests);
	ft_split_test();
	press_enter_to_continue();
	current_test++;
  
	print_test_index(current_test, total_tests);
	ft_bzero_test();
	press_enter_to_continue();
	current_test++;
  
	print_test_index(current_test, total_tests);
	ft_calloc_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_isalnum_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_isalpha_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_isascii_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_isdigit_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_isprint_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_memchr_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_memcmp_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_memcpy_test();
	press_enter_to_continue();
	current_test++;
    
	print_test_index(current_test, total_tests);
	ft_memcpy_test(); 	
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_memmove_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_memset_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strlcpy_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_putendl_fd_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_putnbr_fd_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_putstr_fd_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strchr_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strdup_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_striteri_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strjoin_test();
	press_enter_to_continue();
	current_test++;

/* 	print_test_index(current_test, total_tests);
	ft_strlcat_test();
	press_enter_to_continue();
	current_test++; */

	print_test_index(current_test, total_tests);
	ft_strlen_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strmapi_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strncmp_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strnstr_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strrchr_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_strtrim_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_substr_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_tolower_test();
	press_enter_to_continue();
	current_test++;

	print_test_index(current_test, total_tests);
	ft_toupper_test();
	press_enter_to_continue();
	current_test++;


	printf("Todos os testes foram concluídos! ✅\n");

	return 0;
}

// Função para imprimir o índice do teste
void print_test_index(int current_test, int total_tests)
{
	printf("💬 Teste %d de %d\n", current_test, total_tests);
}

// Função para esperar o usuário pressionar Enter para continuar
void press_enter_to_continue()
{
	printf("+*****************************************************+\n");
	printf("| Pressione ENTER para continuar para o próximo teste |\n");
	printf("+*****************************************************+\n");
	getchar();
}
