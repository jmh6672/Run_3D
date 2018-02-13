struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

}

void RegisterAllClasses()
{
	//Total: 80 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//12. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//21. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//25. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//26. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//27. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//28. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//29. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//30. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//31. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//32. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//33. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//34. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//35. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//36. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//37. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//38. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//39. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//40. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//41. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//42. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//43. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//44. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//45. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//46. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//47. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//48. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//49. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//50. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//51. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//52. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//53. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//54. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//55. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//56. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//57. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//58. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//59. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//60. LODGroup
	void RegisterClass_LODGroup();
	RegisterClass_LODGroup();

	//61. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//62. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//63. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//64. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//65. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//66. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//67. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//68. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//69. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//70. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//71. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//72. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//73. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//76. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//77. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//78. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//79. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
