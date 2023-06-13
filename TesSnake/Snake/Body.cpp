#include "Body.h"
#include "ConsoleEngineCore.h"
#include "createManager.h"

Body::Body() 
{
}

Body::~Body() 
{
}

void Body::Tick(float _Time)
{
	if (isActive)
	{
		//ConsoleEngineCore::CreateObject<Body>();

		int4 tmpPos;
		tmpPos.X = rand() % 3;
		tmpPos.Y = rand() % 3;


		std::list<ConsoleObject*>::iterator Start = ConsoleEngineCore::GetObjects().begin();
		std::list<ConsoleObject*>::iterator End = ConsoleEngineCore::GetObjects().end();

		
		for (; Start != End; ++Start)
		{
			if ((*Start)->GetPos() == tmpPos)
			{
				if (tmpPos.X != 2)
					tmpPos.X = tmpPos.X + 1;
				else if (tmpPos.X == 0)
					tmpPos.X = tmpPos.X + 1;
				else
					tmpPos.X = tmpPos.X - 1;
			}
		}

		SetPos(tmpPos);
		SetChar('A');
		
	}
}

