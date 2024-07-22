#include "SceneManager.h"
#include <string>

std::shared_ptr<SceneInterface> SceneManager::getCurrentScene()
{
	return m_sceneMap[m_currentScene];	
}

void SceneManager::changeScene(int scene)
{
	m_currentScene = scene;
}

void SceneManager::init()
{
	std::shared_ptr<GameScene> gameScene = std::make_shared<GameScene>();
	std::string a("aa");
	gameScene->init(a);
	m_sceneMap[0] = gameScene;
	m_currentScene = 0;
}
