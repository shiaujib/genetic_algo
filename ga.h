#ifndef __ga__
#define __ga__
#define GE_LENGTH 50
#define POPULATION_CNT 200
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
void ge_fitness(parent *x);
void ge_value(parent *x); 

void ge_fitness(parent *x){
	int i,value;
	for(i=0;i<GE_LENGTH;i++){
		value+=x.genes[i];
		}
	x.fitness=value;
	}

void init(){
	int i,j;
	for(i=0;i<POPULATION_CNT;i++){
		for(j=0;j<GE_LENGTH;j++){
			population[i].genes[j]=BinaryRand();
		}
		ge_fitness(&population[i]);
		if(i==0)
			memcpy(&best,&population[i],sizeof(parent);
		else if(population[i].fitness>best.fitness)
			memcpy(&best,&population[i],sizeof(parent);
			
		}
	}
		

	
