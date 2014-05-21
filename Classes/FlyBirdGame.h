#include "cocos2d.h"
#include "Obstacle.h"
using namespace std;

class FlyBirdGame :public cocos2d::Layer
{
public:
	FlyBirdGame();
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(FlyBirdGame);
	void initUI();
	void gameStart(Object* pSender);
	void update(float time);
	Obstacle* obstacle;
	void onTouchesEnded(const vector<Touch*>& touches, Event* event);
	void onTouchesBegan(const vector<Touch*>& touches, Event* event);
	bool isFlying;
	float velocity;
	Rect spriteRect(Sprite* s);
	int GAME_STATUS;
	int score;
	float gravity;
};