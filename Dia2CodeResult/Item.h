// Generated by dia2code
#ifndef ITEM__H
#define ITEM__H

/// class Item -
class Item {
  // Attributes

private:
  Caracteristique bonus;
  String nom;
protected:
  int prix;
  // Operations
public:
  Item (String nom= "NomParDefaut", int prix = 100, Caracteristique bonus = new Caracteristiques());
  ~Item ();
  // Setters and Getters
  int getPrix() const;
  void setPrix(int prix);
  int getNom() const;
  void setNom(String nom);
};

#endif
