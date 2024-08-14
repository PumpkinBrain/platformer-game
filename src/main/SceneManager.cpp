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
	std::shared_ptr<MainMenuScene> mainMenuScene
		= std::make_shared<MainMenuScene>();
	std::string a("aa");
	mainMenuScene->init(a);
	
	std::shared_ptr<GameScene> gameScene 
		= std::make_shared<GameScene>();
	gameScene->init(a);

	m_sceneMap[0] = mainMenuScene;
	m_sceneMap[1] = gameScene;
	m_currentScene = 0;
}
