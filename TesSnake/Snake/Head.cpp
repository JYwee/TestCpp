#include "Head.h"
#include <conio.h>
#include <list>
#include "Body.h"
#include "ConsoleEngineCore.h"

Head::Head() 
{
    SetChar('H');
    SetPos({ 0,0 });
}

Head::~Head() 
{
}

bool Head::IsPossibleMove() 
{
    int4 nextPos;
   // std::list<ConsoleObject*> obj = ConsoleEngineCore::GetObjects();

    
   // ConsoleEngineCore::FindObj(Body);
   // std::list<ConsoleObject*>::iterator findIter = std::find(obj.begin(), obj.end(), Body::Body());
    
    //Next.
//    if( Pos.X == 
    return true;
}

void Head::Tick(float _Time)
{
    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {
    case 'a': 
    {
        if (!(mDirection == int4::Right))
        {
            MovePos = int4::Left;
            SetDirection(int4::Left);
        }
        break;
    }
    case 'd':
    {
        if (!(mDirection == int4::Left))
        {
            MovePos = int4::Right;
            SetDirection(int4::Right);
        }
        break;
    }
    case 'w':
    {
        if (!(mDirection == int4::Down))
        {
            MovePos = int4::Up;
            SetDirection(int4::Up);
        }
        break;

    }
    case 's':
    {
        if (!(mDirection == int4::Up))
        {
            MovePos = int4::Down;
            SetDirection(int4::Down);
        }
        break;
    }
    case 'q':
    {
        ConsoleEngineCore::EngineOff();
        break;
    }
    default:
        break;
    }

    

    AddPos(MovePos);

    /*if (IsPossibleMove())
    {

    }*/
}