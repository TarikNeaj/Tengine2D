#pragma once
#ifndef PLAYERINPUTCOMPONENT_HPP
#define PLAYERINPUTCOMPONENT_HPP

// Engine Classes
#include "InputComponent.hpp"
class GameObject;

// C++ Standard Library
#include <string>
#include <memory>


class PlayerInputComponent : public InputComponent
{
public:

	// Default constructor
	PlayerInputComponent();

	// Default constructor - Initializes info


	// Updates Component
	virtual void update(const GameObject& gameObject, float delta);

	// Returns the component
	virtual const std::shared_ptr<Component>& getComponent() const;

	// Returns the amount of components that we have
	virtual const std::string PlayerInputComponent::getName() const;

private:

	// Name of the component
	std::string name;


};
#endif