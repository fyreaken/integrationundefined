set(DSCRIPTS_SOURCES_AI)

add_subdirectory(ACT)
add_subdirectory(AG)
add_subdirectory(FV)
add_subdirectory(GENERAL)
add_subdirectory(GF)
add_subdirectory(MINIGAME)
add_subdirectory(NP)
add_subdirectory(NS)
add_subdirectory(PETS)
add_subdirectory(PROPERTY)
add_subdirectory(RACING)
add_subdirectory(SPEC)
add_subdirectory(WILD)
add_subdirectory(YRK)

add_library(dScriptsAI INTERFACE)
target_sources(dScriptsAI INTERFACE
	$<TARGET_OBJECTS:dScriptsAiAct>
	$<TARGET_OBJECTS:dScriptsAiAG>
	$<TARGET_OBJECTS:dScriptsAiFV>
	$<TARGET_OBJECTS:dScriptsAiGeneral>
	$<TARGET_OBJECTS:dScriptsAiGF>
	$<TARGET_OBJECTS:dScriptsAiMinigame>
	$<TARGET_OBJECTS:dScriptsAiNP>
	$<TARGET_OBJECTS:dScriptsAiNS>
	$<TARGET_OBJECTS:dScriptsAiPets>
	$<TARGET_OBJECTS:dScriptsAiProperty>
	$<TARGET_OBJECTS:dScriptsAiRacing>
	$<TARGET_OBJECTS:dScriptsAiSpec>
	$<TARGET_OBJECTS:dScriptsAiWild>
 	$<TARGET_OBJECTS:dScriptsAiYrk>
)

target_include_directories(dScriptsAI INTERFACE
	$<TARGET_PROPERTY:dScriptsAiAct,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiAG,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiFV,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiGeneral,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiGF,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiMinigame,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiNP,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiNS,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiPets,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiProperty,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiRacing,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiSpec,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:dScriptsAiWild,INTERFACE_INCLUDE_DIRECTORIES>
 	$<TARGET_PROPERTY:dScriptsAiYrk,INTERFACE_INCLUDE_DIRECTORIES>
)
