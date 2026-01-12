#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>



void calc (const uint8_t in [], uint8_t out [])
{
	uint8_t* A_in = calloc(1, sizeof(uint8_t));
	uint8_t* A_out = calloc(1, sizeof(uint8_t));
	A_in[0] |= ((in[0] >> 0) & 1) << 0;
	A_in[0] |= ((in[0] >> 1) & 1) << 1;
	 
	uint64_t A_table[] = {1, 0, 0, 1 };
	 
	uint64_t A_in_ex = 0;
	A_in_ex += A_in_ex*256 + (uint64_t)(A_in[0]);
	uint64_t A_out_ex = (A_table[A_in_ex]); 
	 
	A_out[0] = A_out_ex >> 0;
	 
	free(A_in);
	 
	 
	uint8_t* B_in = calloc(1, sizeof(uint8_t));
	uint8_t* B_out = calloc(1, sizeof(uint8_t));
	B_in[0] |= ((in[0] >> 2) & 1) << 0;
	 
	uint64_t B_table[] = {3, 1 };
	 
	uint64_t B_in_ex = 0;
	B_in_ex += B_in_ex*256 + (uint64_t)(B_in[0]);
	uint64_t B_out_ex = (B_table[B_in_ex]); 
	 
	B_out[0] = B_out_ex >> 0;
	 
	free(B_in);
	 
	 
	uint8_t* C_in = calloc(1, sizeof(uint8_t));
	uint8_t* C_out = calloc(1, sizeof(uint8_t));
	C_in[0] |= ((in[0] >> 3) & 1) << 0;
	C_in[0] |= ((in[0] >> 4) & 1) << 1;
	 
	uint64_t C_table[] = {1, 3, 0, 1 };
	 
	uint64_t C_in_ex = 0;
	C_in_ex += C_in_ex*256 + (uint64_t)(C_in[0]);
	uint64_t C_out_ex = (C_table[C_in_ex]); 
	 
	C_out[0] = C_out_ex >> 0;
	 
	free(C_in);
	 
	 
	uint8_t* E_in = calloc(1, sizeof(uint8_t));
	uint8_t* E_out = calloc(1, sizeof(uint8_t));
	E_in[0] |= ((in[0] >> 1) & 1) << 0;
	 
	uint64_t E_table[] = {1, 1 };
	 
	uint64_t E_in_ex = 0;
	E_in_ex += E_in_ex*256 + (uint64_t)(E_in[0]);
	uint64_t E_out_ex = (E_table[E_in_ex]); 
	 
	E_out[0] = E_out_ex >> 0;
	 
	free(E_in);
	 
	 
	uint8_t* F_in = calloc(1, sizeof(uint8_t));
	uint8_t* F_out = calloc(1, sizeof(uint8_t));
	F_in[0] |= ((in[0] >> 2) & 1) << 0;
	 
	uint64_t F_table[] = {1, 1 };
	 
	uint64_t F_in_ex = 0;
	F_in_ex += F_in_ex*256 + (uint64_t)(F_in[0]);
	uint64_t F_out_ex = (F_table[F_in_ex]); 
	 
	F_out[0] = F_out_ex >> 0;
	 
	free(F_in);
	 
	 
	uint8_t* H_in = calloc(1, sizeof(uint8_t));
	uint8_t* H_out = calloc(1, sizeof(uint8_t));
	H_in[0] |= ((in[0] >> 2) & 1) << 0;
	H_in[0] |= ((in[0] >> 3) & 1) << 1;
	 
	uint64_t H_table[] = {1, 3, 0, 1 };
	 
	uint64_t H_in_ex = 0;
	H_in_ex += H_in_ex*256 + (uint64_t)(H_in[0]);
	uint64_t H_out_ex = (H_table[H_in_ex]); 
	 
	H_out[0] = H_out_ex >> 0;
	 
	free(H_in);
	 
	 
	uint8_t* V_in = calloc(1, sizeof(uint8_t));
	uint8_t* V_out = calloc(1, sizeof(uint8_t));
	V_in[0] |= ((in[0] >> 0) & 1) << 0;
	 
	uint64_t V_table[] = {0, 1 };
	 
	uint64_t V_in_ex = 0;
	V_in_ex += V_in_ex*256 + (uint64_t)(V_in[0]);
	uint64_t V_out_ex = (V_table[V_in_ex]); 
	 
	V_out[0] = V_out_ex >> 0;
	 
	free(V_in);
	 
	 
	uint8_t* D_in = calloc(1, sizeof(uint8_t));
	uint8_t* D_out = calloc(1, sizeof(uint8_t));
	D_in[0] |= ((B_out[0] >> 0) & 1) << 0;
	D_in[0] |= ((B_out[0] >> 0) & 1) << 1;
	 
	uint64_t D_table[] = {1, 0, 0, 1 };
	 
	uint64_t D_in_ex = 0;
	D_in_ex += D_in_ex*256 + (uint64_t)(D_in[0]);
	uint64_t D_out_ex = (D_table[D_in_ex]); 
	 
	D_out[0] = D_out_ex >> 0;
	 
	free(D_in);
	 
	 
	uint8_t* G_in = calloc(1, sizeof(uint8_t));
	uint8_t* G_out = calloc(1, sizeof(uint8_t));
	G_in[0] |= ((in[0] >> 2) & 1) << 0;
	G_in[0] |= ((B_out[0] >> 0) & 1) << 1;
	 
	uint64_t G_table[] = {0, 2, 0, 3 };
	 
	uint64_t G_in_ex = 0;
	G_in_ex += G_in_ex*256 + (uint64_t)(G_in[0]);
	uint64_t G_out_ex = (G_table[G_in_ex]); 
	 
	G_out[0] = G_out_ex >> 0;
	 
	free(G_in);
	 
	 
	uint8_t* N_in = calloc(1, sizeof(uint8_t));
	uint8_t* N_out = calloc(1, sizeof(uint8_t));
	N_in[0] |= ((B_out[0] >> 1) & 1) << 0;
	N_in[0] |= ((C_out[0] >> 0) & 1) << 1;
	 
	uint64_t N_table[] = {2, 1, 1, 3 };
	 
	uint64_t N_in_ex = 0;
	N_in_ex += N_in_ex*256 + (uint64_t)(N_in[0]);
	uint64_t N_out_ex = (N_table[N_in_ex]); 
	 
	N_out[0] = N_out_ex >> 0;
	 
	free(N_in);
	 
	 
	uint8_t* O_in = calloc(1, sizeof(uint8_t));
	uint8_t* O_out = calloc(1, sizeof(uint8_t));
	O_in[0] |= ((in[0] >> 3) & 1) << 0;
	O_in[0] |= ((E_out[0] >> 0) & 1) << 1;
	 
	uint64_t O_table[] = {1, 2, 3, 2 };
	 
	uint64_t O_in_ex = 0;
	O_in_ex += O_in_ex*256 + (uint64_t)(O_in[0]);
	uint64_t O_out_ex = (O_table[O_in_ex]); 
	 
	O_out[0] = O_out_ex >> 0;
	 
	free(O_in);
	 
	 
	uint8_t* Q_in = calloc(1, sizeof(uint8_t));
	uint8_t* Q_out = calloc(1, sizeof(uint8_t));
	Q_in[0] |= ((F_out[0] >> 0) & 1) << 0;
	Q_in[0] |= ((F_out[0] >> 0) & 1) << 1;
	 
	uint64_t Q_table[] = {1, 0, 0, 1 };
	 
	uint64_t Q_in_ex = 0;
	Q_in_ex += Q_in_ex*256 + (uint64_t)(Q_in[0]);
	uint64_t Q_out_ex = (Q_table[Q_in_ex]); 
	 
	Q_out[0] = Q_out_ex >> 0;
	 
	free(Q_in);
	 
	 
	uint8_t* U_in = calloc(1, sizeof(uint8_t));
	uint8_t* U_out = calloc(1, sizeof(uint8_t));
	U_in[0] |= ((F_out[0] >> 0) & 1) << 0;
	 
	uint64_t U_table[] = {1, 2 };
	 
	uint64_t U_in_ex = 0;
	U_in_ex += U_in_ex*256 + (uint64_t)(U_in[0]);
	uint64_t U_out_ex = (U_table[U_in_ex]); 
	 
	U_out[0] = U_out_ex >> 0;
	 
	free(U_in);
	 
	 
	uint8_t* I_in = calloc(1, sizeof(uint8_t));
	uint8_t* I_out = calloc(1, sizeof(uint8_t));
	I_in[0] |= ((C_out[0] >> 1) & 1) << 0;
	I_in[0] |= ((G_out[0] >> 1) & 1) << 1;
	 
	uint64_t I_table[] = {1, 1, 0, 0 };
	 
	uint64_t I_in_ex = 0;
	I_in_ex += I_in_ex*256 + (uint64_t)(I_in[0]);
	uint64_t I_out_ex = (I_table[I_in_ex]); 
	 
	I_out[0] = I_out_ex >> 0;
	 
	free(I_in);
	 
	 
	uint8_t* J_in = calloc(1, sizeof(uint8_t));
	uint8_t* J_out = calloc(1, sizeof(uint8_t));
	J_in[0] |= ((C_out[0] >> 0) & 1) << 0;
	J_in[0] |= ((G_out[0] >> 1) & 1) << 1;
	 
	uint64_t J_table[] = {1, 2, 3, 2 };
	 
	uint64_t J_in_ex = 0;
	J_in_ex += J_in_ex*256 + (uint64_t)(J_in[0]);
	uint64_t J_out_ex = (J_table[J_in_ex]); 
	 
	J_out[0] = J_out_ex >> 0;
	 
	free(J_in);
	 
	 
	uint8_t* K_in = calloc(1, sizeof(uint8_t));
	uint8_t* K_out = calloc(1, sizeof(uint8_t));
	K_in[0] |= ((B_out[0] >> 1) & 1) << 0;
	K_in[0] |= ((D_out[0] >> 0) & 1) << 1;
	 
	uint64_t K_table[] = {1, 1, 1, 0 };
	 
	uint64_t K_in_ex = 0;
	K_in_ex += K_in_ex*256 + (uint64_t)(K_in[0]);
	uint64_t K_out_ex = (K_table[K_in_ex]); 
	 
	K_out[0] = K_out_ex >> 0;
	 
	free(K_in);
	 
	 
	uint8_t* P_in = calloc(1, sizeof(uint8_t));
	uint8_t* P_out = calloc(1, sizeof(uint8_t));
	P_in[0] |= ((G_out[0] >> 0) & 1) << 0;
	P_in[0] |= ((O_out[0] >> 1) & 1) << 1;
	 
	uint64_t P_table[] = {1, 1, 0, 0 };
	 
	uint64_t P_in_ex = 0;
	P_in_ex += P_in_ex*256 + (uint64_t)(P_in[0]);
	uint64_t P_out_ex = (P_table[P_in_ex]); 
	 
	P_out[0] = P_out_ex >> 0;
	 
	free(P_in);
	 
	 
	uint8_t* L_in = calloc(1, sizeof(uint8_t));
	uint8_t* L_out = calloc(1, sizeof(uint8_t));
	L_in[0] |= ((J_out[0] >> 0) & 1) << 0;
	L_in[0] |= ((C_out[0] >> 1) & 1) << 1;
	 
	uint64_t L_table[] = {1, 2, 3, 2 };
	 
	uint64_t L_in_ex = 0;
	L_in_ex += L_in_ex*256 + (uint64_t)(L_in[0]);
	uint64_t L_out_ex = (L_table[L_in_ex]); 
	 
	L_out[0] = L_out_ex >> 0;
	 
	free(L_in);
	 
	 
	uint8_t* M_in = calloc(1, sizeof(uint8_t));
	uint8_t* M_out = calloc(1, sizeof(uint8_t));
	M_in[0] |= ((J_out[0] >> 0) & 1) << 0;
	 
	uint64_t M_table[] = {1, 1 };
	 
	uint64_t M_in_ex = 0;
	M_in_ex += M_in_ex*256 + (uint64_t)(M_in[0]);
	uint64_t M_out_ex = (M_table[M_in_ex]); 
	 
	M_out[0] = M_out_ex >> 0;
	 
	free(M_in);
	 
	 
	uint8_t* S_in = calloc(1, sizeof(uint8_t));
	uint8_t* S_out = calloc(1, sizeof(uint8_t));
	S_in[0] |= ((I_out[0] >> 0) & 1) << 0;
	S_in[0] |= ((B_out[0] >> 1) & 1) << 1;
	 
	uint64_t S_table[] = {1, 1, 0, 0 };
	 
	uint64_t S_in_ex = 0;
	S_in_ex += S_in_ex*256 + (uint64_t)(S_in[0]);
	uint64_t S_out_ex = (S_table[S_in_ex]); 
	 
	S_out[0] = S_out_ex >> 0;
	 
	free(S_in);
	 
	 
	uint8_t* T_in = calloc(1, sizeof(uint8_t));
	uint8_t* T_out = calloc(1, sizeof(uint8_t));
	T_in[0] |= ((P_out[0] >> 0) & 1) << 0;
	 
	uint64_t T_table[] = {1, 1 };
	 
	uint64_t T_in_ex = 0;
	T_in_ex += T_in_ex*256 + (uint64_t)(T_in[0]);
	uint64_t T_out_ex = (T_table[T_in_ex]); 
	 
	T_out[0] = T_out_ex >> 0;
	 
	free(T_in);
	 
	 
	uint8_t* W_in = calloc(1, sizeof(uint8_t));
	uint8_t* W_out = calloc(1, sizeof(uint8_t));
	W_in[0] |= ((J_out[0] >> 1) & 1) << 0;
	W_in[0] |= ((C_out[0] >> 0) & 1) << 1;
	 
	uint64_t W_table[] = {1, 1, 1, 1 };
	 
	uint64_t W_in_ex = 0;
	W_in_ex += W_in_ex*256 + (uint64_t)(W_in[0]);
	uint64_t W_out_ex = (W_table[W_in_ex]); 
	 
	W_out[0] = W_out_ex >> 0;
	 
	free(W_in);
	 
	 
	uint8_t* R_in = calloc(1, sizeof(uint8_t));
	uint8_t* R_out = calloc(1, sizeof(uint8_t));
	R_in[0] |= ((L_out[0] >> 1) & 1) << 0;
	R_in[0] |= ((A_out[0] >> 0) & 1) << 1;
	 
	uint64_t R_table[] = {0, 0, 1, 0 };
	 
	uint64_t R_in_ex = 0;
	R_in_ex += R_in_ex*256 + (uint64_t)(R_in[0]);
	uint64_t R_out_ex = (R_table[R_in_ex]); 
	 
	R_out[0] = R_out_ex >> 0;
	 
	free(R_in);
	 
	 
	out[0] = 0;
	out[1] = 0;
	out[1] |= ((U_out[0] >> 0) & 1) << 4;
	out[1] |= ((S_out[0] >> 0) & 1) << 3;
	out[1] |= ((W_out[0] >> 0) & 1) << 2;
	out[1] |= ((T_out[0] >> 0) & 1) << 1;
	out[1] |= ((R_out[0] >> 0) & 1) << 0;
	out[0] |= ((K_out[0] >> 0) & 1) << 7;
	out[0] |= ((Q_out[0] >> 0) & 1) << 6;
	out[0] |= ((N_out[0] >> 1) & 1) << 5;
	out[0] |= ((V_out[0] >> 0) & 1) << 4;
	out[0] |= ((H_out[0] >> 1) & 1) << 3;
	out[0] |= ((H_out[0] >> 0) & 1) << 2;
	out[0] |= ((M_out[0] >> 0) & 1) << 1;
	out[0] |= ((in[0] >> 2) & 1) << 0;
	 
	free(A_out);
	free(B_out);
	free(C_out);
	free(E_out);
	free(F_out);
	free(H_out);
	free(V_out);
	free(D_out);
	free(G_out);
	free(N_out);
	free(O_out);
	free(Q_out);
	free(U_out);
	free(I_out);
	free(J_out);
	free(K_out);
	free(P_out);
	free(L_out);
	free(M_out);
	free(S_out);
	free(T_out);
	free(W_out);
	free(R_out);


}