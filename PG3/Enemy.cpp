#include "Enemy.h"



void Enemy::Approach(){
	cout << "接近" << endl;
}

void Enemy::Attack(){
	cout << "射撃" << endl;
}

void Enemy::Withdrawal(){
	cout << "離脱" << endl;
}

void Enemy::Update(){
	for (int i = 0; i < kMovementPattern; i++) {

	(this->*EnemyActionTable[i])();//Enemyの動き
	}

}




void (Enemy::*Enemy::EnemyActionTable[])() = {
    &Enemy::Approach,  //要素1
	&Enemy::Attack,    //要素2
    &Enemy::Withdrawal,//要素3
};
