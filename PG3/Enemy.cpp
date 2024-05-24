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
	(this->*EnemyActionTable[0])();//接近

	(this->*EnemyActionTable[1])();//射撃

	(this->*EnemyActionTable[2])();//離脱
}




void (Enemy::*Enemy::EnemyActionTable[])() = {
    &Enemy::Approach,  //要素1
	&Enemy::Attack,    //要素2
    &Enemy::Withdrawal,//要素3
};
