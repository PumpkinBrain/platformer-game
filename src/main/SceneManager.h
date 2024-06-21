#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include "SceneInterface.h"
#include "GameScene.h"

class SceneManager
{
	std::map<int, SceneInterface> m_sceneMap;
	int m_currentScene;	

	public:
		SceneInterface getCurrentScene();
		void changeScene(int scene);
		void init();
};

#endif
