#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "Joystick.h"

USING_NS_CC;

class HelloWorld : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* scene();
    
    // a selector callback
    void menuCloseCallback(Ref* pSender);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

	//ҡ���¼�����
	void moveSpr(float interval,float x , float y,JoystickEventType type);

private:
	Sprite*   m_ball;
	Label* m_label;
};

#endif // __HELLOWORLD_SCENE_H__
