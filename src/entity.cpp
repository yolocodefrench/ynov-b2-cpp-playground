#include "entity.h"

Entity::Entity()
{
    //ctor
}

Entity::~Entity()
{
    //dtor
}

// cette m�thode donne des d�gats � l'entit� adverse
void Entity::Attaquer(Entity *entite){
    this->Getforce();
}


