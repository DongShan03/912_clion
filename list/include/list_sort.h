//
// Created by huang on 23-9-11.
//

#ifndef INC_912LIST_LIST_SORT_H
#define INC_912LIST_LIST_SORT_H

template <typename T>
void List<T>::sort(ListNodePosi<T> p, Rank r)  {
    srand(time(NULL));
    switch (rand() % 3) {
        case 0:
            std::cout << "the sort function you select is:" << "selectionSort" << "\n";
            selectionSort(p, r);
            break;
        case 1:
            std::cout << "the sort function you select is:" << "insertionSort" << "\n";
            insertionSort(p, r);
            break;
        case 2:
            std::cout << "the sort function you select is:" << "mergeSort" << "\n";
            mergeSort(p, r);
            break;
        default:
//            radixSort(p, r);
            break;
    }
}

#endif //INC_912LIST_LIST_SORT_H
