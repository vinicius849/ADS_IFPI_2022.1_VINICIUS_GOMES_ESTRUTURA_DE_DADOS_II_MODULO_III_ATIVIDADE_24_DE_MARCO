#include <stdio.h>
#include <stdlib.h>

void emNivel(Arv A) {  // Percurso de Árvore em extensão ou em nível

if(A == NULL) return;
Fila F = fila(MAX);  // é uma fla de Árvore
emFileira(A,F);
		while(!vaziaf(F)) {
	Arv A = desEmfileira(F);
	printf(fmt, A -> item);
	if(A -> esq != NULL) emFileira(A -> esq, F);
	if(A -> dir != NULL) emFileira(A -> dir, F);
		}
}

// Comtinuação de uma Implementação em C++ com percurso de extensão com Árvores Binárias

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
