#include<bits.stdc++.h>
using namespace std;

class MapNode
{
public:
	string key;
	V value;
	MapNode *next;
	MapNode(String key,V value)
	{
		this->key=key;
		this->value=value;
		next=NULL;
	}
	~MapNode()
	{
		delete next;
	}
};
template<typename V>
class ourmap
{
	int count=0;
	MapNode<V> **buckets;
	int size;
	int numBuckets;
public:
	ourmap()
	{
		size=0;
		numBuckets=5;
		Buckets =new MapNode<V>*[numBuckets];
		for(int i=0;i<numBuckets;i++)
		{
			Buckets[i]=NULL;
		}
	}
	~ourmap()
	{
		for(int i=0;i<numBuckets;i++)
		{
			delete numBuckets[i];
		}
	}
	delete[] numBuckets;
}
int size()
{
	return count;
}
void insert(String key,V value)
{
	int BucketIndex=getBucketIndex[key];
	MapNode<V>* head=buckets[BucketIndex];
	while(head!=NULL)
	{
		if(head->key==key)
		{
			head->value=value;
			return ;
		}
		head=heda->next;
	}
	head=buckets[BucketIndex];
	MapNode<V>* node=new MapNode<V>(key,value);
	node->next=head;
	Buckets[BucketIndex]=node;
	count++;
}

int getBucketIndex(String key)
{
	int hashcode=0;
	int currentCoeff=1;
	for(int i=key.length()-1;i>=0;i--)
	{
		hashcode+=key[i]*currentCoeff;
		hashcode=hashcode%37 /* took 37 as p as it a prime number */
		currentCoeff*=37;
		currentCoeff=currentCoeff%numBuckets;
	}
	return hashcode%numBuckets;
}