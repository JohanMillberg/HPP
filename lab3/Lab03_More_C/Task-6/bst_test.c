/**
 * Example of a main() function using a binary search tree (BST),
 * reading information about plants to add one by one from the
 * standard input. See BST tasks in Lab 3.
 *
 * Course: High Performance Programming, Uppsala University
 *
 * Authors: Anastasia Kruchinina <anastasia.kruchinina@it.uu.se>
 *          Elias Rudberg <elias.rudberg@it.uu.se>
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct tree_node
{
   int              ID;
   char             *name;
   struct tree_node *left;
   struct tree_node *right;
} node_t;


void print_bst(node_t *node)
{
   if(node == NULL) {printf("Tree is empty!\n"); return;}

   if (node != NULL) printf("%d %s: \t", node->ID, node->name);
   if (node->left != NULL) printf("L%d,", node->left->ID);
   if (node->right != NULL) printf("R%d", node->right->ID);
   printf("\n");

   if (node->left != NULL)
      print_bst(node->left);
   if (node->right != NULL)
      print_bst(node->right);
}


void delete_tree(node_t **node)
{
   if (*node == NULL) return;

   else {
      printf("Deleting node: %d \n", (*node)->ID);

      delete_tree(&(*node)->left);
      delete_tree(&(*node)->right);

      free((*node)->name);
      free((*node));
      (*node)->name = NULL;
      (*node) = NULL;
   }
}

void insert(node_t **node, int ID, char *name) // node is a pointer to a pointer to a node
// *node points to the pointer of the node
{
  char *namecpy = strdup(name); // Copies the pointer name and allocates memory for the string
  if (*node == NULL) {
     *node = malloc(sizeof(node_t)); //Allocates memory for the pointer to the node
     (*node)->ID = ID; // Sets the ID of the node that the pointer *node points to
     (*node)->name = namecpy;
     (*node)->left = NULL; // Sets the node left of the current node to NULL
     (*node)->right = NULL; // Sets the node right of the current node to NULL
     return;
  }

  else if ((*node)->ID > ID) {
     insert((&(*node)->left), ID, namecpy);
  }

  else if ((*node)->ID < ID) {
     insert((&(*node)->right), ID, namecpy);
  }
}


void search(node_t *node, int ID)
{
  printf("ERROR: Function search is not implemented\n");
}


int main(int argc, char const *argv[])
{
   node_t *root = NULL;

   while(1) {
     printf("================================================\n");
     printf("Please enter ID of plant to add (zero to stop): ");
     int id;
     int r = scanf("%d", &id);
     if(r != 1 || id == 0) {
       printf("Breaking loop now.\n");
       break;
     }
     printf("OK, you entered id %d\n", id);
     printf("Please enter name of plant to add: ");
     char nameString[100]; /* Note: this will only work if the name entered is less than 100 characters long! */
     r = scanf("%s", nameString);
     if(r != 1) {
       printf("Failed to read name, breaking loop now.\n");
       break;
     }
     printf("OK, you have entered the following:  id = %d  nameString = %s\n", id, nameString);
     printf("Now insterting that into the tree...\n");
     insert(&root, id, nameString);
     printf("Now printing the tree:\n");
     print_bst(root);
   }

   printf("After loop.\n");

   delete_tree(&root);
   print_bst(root);
   return 0;
}