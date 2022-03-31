#include <stdio.h>
#include <stdlib.h>

void emNivel(Arv A) {  // Percurso de �rvore em extens�o ou em n�vel

if(A == NULL) return;
Fila F = fila(MAX);  // � uma fla de �rvore
emFileira(A,F);
		while(!vaziaf(F)) {
	Arv A = desEmfileira(F);
	printf(fmt, A -> item);
	if(A -> esq != NULL) emFileira(A -> esq, F);
	if(A -> dir != NULL) emFileira(A -> dir, F);
		}
}

// Comtinua��o de uma Implementa��o em C++ com percurso de extens�o com �rvores Bin�rias

void percursoExtensao() {
	queue<ArvoreNo<T>*> f;
	ArvoreNo<T> *p = root;
	if(p!= NULL) {
		f.push(p);
		while(!f.empty()) {
			p = f.front();
			visit(p);
			f.pop();
			if(p -> left != NULL)
				f.push(p -> left);
			if(p -> right != NULL)
				f.push(p -> right);
			}
			}
		}
	}
}
