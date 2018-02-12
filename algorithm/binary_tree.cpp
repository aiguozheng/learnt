#include<stdio.h>
#include<stdlib.h>

#define QUEUE_MAXSIZE 50
typedef char DATA;

typedef struct ChainTree
{
  DATA data;
  struct ChainTree *left;
  struct ChainTree *right;
} ChainBinTre

