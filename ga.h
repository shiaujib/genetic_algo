#ifndef __ga__
#define __ga__
#define GE_LENGTH 50
#define POPULATION_SIZE 200
#define INTERATE 100
#define CROSSOVER_RATE 1
#define MUTATION_RATE 0
typedef struct parent_str{
	int genes[GE_LENGTH];
	double fitness;
	double dec;
}parent;

#define GEPosRand (rand()%GE_LENGTH)
#define BinaryRand (rand()%2)
#define SRamd ((double)rand()/(double)RAND_MAX)

parent population[POPULATION_SIZE];
parent pool[POPULATION_SIZE];
parent best;
void init();
void selection();
void crossover();
void ge_fitness();
void ge_value(); 
i

