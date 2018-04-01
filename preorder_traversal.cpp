#include<iostream>
using namespace std;

typedef struct node{
    int data;
    node *kiri;
    node *kanan;
}* pohon;

void tambah_node(pohon &P, int value){
    pohon baru = new node;
    baru->data = value;
    baru->kiri = NULL;
    baru->kanan = NULL;
    P = baru;
}

void cetak_inorder(pohon &P){
    if(P->kiri != NULL){
        cetak_inorder(P->kiri);
    }
    cout << P->data << " ";
    if(P->kanan != NULL){
        cetak_inorder(P->kanan);
    }
}

void cetak_preorder(pohon &P){
    cout << P->data << " ";
    if(P->kiri != NULL){
        cetak_preorder(P->kiri);
    }
    if(P->kanan != NULL){
        cetak_preorder(P->kanan);
    }
}

void cetak_postorder(pohon &P){
    if(P->kiri != NULL){
        cetak_postorder(P->kiri);
    }
    if(P->kanan != NULL){
        cetak_postorder(P->kanan);
    }
    cout << P->data << " ";
}

int main(){


    return 0;
}
