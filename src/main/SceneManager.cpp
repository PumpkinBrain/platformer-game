#include "SceneManager.h"

SceneInterface SceneManager::getCurrentScene()
{
	return m_sceneMap[m_currentScene];	
}

void SceneManager::changeScene(int scene)
{
	m_currentScene = scene;
}

void SceneManager::init()
{
	GameScene gameScene;
	m_sceneMap[0] = gameScene;
	m_currentScene = 0;
}
