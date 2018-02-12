#include "entity.h"

Entity::Entity()
{
    //ctor
}

Entity::~Entity()
{
    //dtor
}

// cette méthode donne des dégats à l'entité adverse
void Entity::Attaquer(Entity *entite){
    this->Getforce();
}


