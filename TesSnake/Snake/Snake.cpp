// Snake.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "ConsoleEngineCore.h"
#include "Head.h"
#include "Body.h"
//#include "createManager.h"
#include <Windows.h>


int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    srand(time(0));

	//createManager::GetInstance()->mBody = new Body;
	//createManager::GetInstance()->mHead = new Head;


	//createManager::GetInstance()->mHead = ConsoleEngineCore::CreateObject<Head>();
	//createManager::GetInstance()->mBody = ConsoleEngineCore::CreateObject<Body>();

	std::list<ConsoleObject*> Objects = ConsoleEngineCore::GetObjects();

	
    Head* myHead = ConsoleEngineCore::CreateObject<Head>();
	
	Body* myBody = ConsoleEngineCore::CreateObject<Body>();
	//createManager::GetInstance()->mBodyList.push_back(*myBody);
    //std::list<Body*>;

    //ConsoleEngineCore::GetObjects();

    //Body* myBody = ConsoleEngineCore::CreateObject<Body>();
	/*ConsoleEngineCore::FindObj(myBody);*/
	/*int4 tmpPos;
	tmpPos.X = rand() % 3;
	tmpPos.Y = rand() % 3;

	myBody->SetPos(tmpPos);
	myBody->SetChar('a');*/

	
    
    //ConsoleEngineCore::Screen.SetPixel


    // 이 함수만은 무조건 존재해야 합니다.
    ConsoleEngineCore::EngineStart(int4{3, 3});



	/*std::list<ConsoleObject*>::iterator Start = Objects.begin();
	std::list<ConsoleObject*>::iterator End = Objects.end();

	for (; Start != End; ++Start)
	{
		ConsoleObject* Object = (*Start);
		
		if (Object != nullptr)
		{
			delete Object;
			Object = nullptr;
		}
	}
	*/
	ConsoleEngineCore::Destory();
    
}
