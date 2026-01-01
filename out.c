#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>



void calc (const uint8_t in [], uint8_t out [])
{
	uint8_t* A_in = calloc(1, sizeof(uint8_t));
	uint8_t* A_out = calloc(1, sizeof(uint8_t));
	A_in[0] |= (in[0] & (1 << 0));
	A_in[0] |= (in[0] & (1 << 1));
	 
	uint256_t A_table[] = [0, 0, 0, 1];
	 
	uint256_t A_in_ex = 0;
	A_in_ex += A_in_ex*256 + (uint256_t)(A_in[1]);
	uint256_t A_out_ex = (A_table[A_in_ex]); 
	 
	A_out[0] = A_out_ex >> 0;
	 
	free(A_in);
	 
	 
	uint8_t* B_in = calloc(1, sizeof(uint8_t));
	uint8_t* B_out = calloc(1, sizeof(uint8_t));
	B_in[0] |= (A_out[0] & (1 << 0));
	B_in[0] |= (in[0] & (1 << 2));
	 
	uint256_t B_table[] = [1, 0, 0, 0];
	 
	uint256_t B_in_ex = 0;
	B_in_ex += B_in_ex*256 + (uint256_t)(B_in[1]);
	uint256_t B_out_ex = (B_table[B_in_ex]); 
	 
	B_out[0] = B_out_ex >> 0;
	 
	free(B_in);
	 
	 
	uint8_t* C_in = calloc(1, sizeof(uint8_t));
	uint8_t* C_out = calloc(1, sizeof(uint8_t));
	C_in[0] |= (A_out[0] & (1 << 0));
	C_in[0] |= (B_out[0] & (1 << 0));
	 
	uint256_t C_table[] = [0, 1, 1, 0];
	 
	uint256_t C_in_ex = 0;
	C_in_ex += C_in_ex*256 + (uint256_t)(C_in[1]);
	uint256_t C_out_ex = (C_table[C_in_ex]); 
	 
	C_out[0] = C_out_ex >> 0;
	 
	free(C_in);
	 
	 
	uint8_t* E_in = calloc(1, sizeof(uint8_t));
	uint8_t* E_out = calloc(1, sizeof(uint8_t));
	E_in[0] |= (C_out[0] & (1 << 0));
	E_in[0] |= (B_out[0] & (1 << 0));
	 
	uint256_t E_table[] = [0, 0, 0, 1];
	 
	uint256_t E_in_ex = 0;
	E_in_ex += E_in_ex*256 + (uint256_t)(E_in[1]);
	uint256_t E_out_ex = (E_table[E_in_ex]); 
	 
	E_out[0] = E_out_ex >> 0;
	 
	free(E_in);
	 
	 
	uint8_t* D_in = calloc(1, sizeof(uint8_t));
	uint8_t* D_out = calloc(1, sizeof(uint8_t));
	D_in[0] |= (E_out[0] & (1 << 0));
	D_in[0] |= (in[0] & (1 << 3));
	 
	uint256_t D_table[] = [1, 1, 1, 0];
	 
	uint256_t D_in_ex = 0;
	D_in_ex += D_in_ex*256 + (uint256_t)(D_in[1]);
	uint256_t D_out_ex = (D_table[D_in_ex]); 
	 
	D_out[0] = D_out_ex >> 0;
	 
	free(D_in);
	 
	 
	out[0] |= (C_out[0] & (1 << 0));
	out[0] |= (D_out[0] & (1 << 0));
	 
	free(A_out);
	free(B_out);
	free(C_out);
	free(E_out);
	free(D_out);
	 
	return out; 


}