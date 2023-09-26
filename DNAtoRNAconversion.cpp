/*
codewars: DNA to RNA Conversion

Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems.
It is composed of four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').

Ribonucleic acid, RNA, is the primary messenger molecule in cells.
RNA differs slightly from DNA its chemical structure and contains no Thymine.
In RNA Thymine is replaced by another nucleic acid Uracil ('U').

Create a function which translates a given DNA string into RNA.

For example:
"GCAT"  =>  "GCAU"

The input string can be of arbitrary length - in particular, it may be empty.
All input is guaranteed to be valid, each input string will only ever consist of 'G','C','A' and/or 'T'.
*/
#include <iostream>
#include <string>
using namespace std;

string DNAtoRNA(string dna){
  string rna="";
  for(int i=0;i<dna.length();i++) {
    if(dna[i]=='T')
      rna+='U';
    else
      rna+=dna[i];
  }
  return rna;
}

int main() {

    cout<<DNAtoRNA("GCAT")<<endl;//"GCAU"

    return 0;
}