all:
	g++ CAnimation.cpp CApp_OnCleanup.cpp CApp_OnInit.cpp CApp_OnEvent.cpp CApp.cpp CApp_OnLoop.cpp CApp_OnRender.cpp CArea.cpp CCamera.cpp CEntity.cpp CEntityCol.cpp CEvent.cpp CFontBank.cpp CFPS.cpp CMap.cpp CPlayer.cpp CSurface.cpp CTile.cpp CText.cpp CWeapon.cpp -o application -lSDL2_image -lSDL2 -lSDL2_ttf


