import React from 'react'
import { observer} from 'mobx-react-lite';
import { useStore } from '../context/StoreContext';
import { TFriend } from '../store/store';

export const FriendsMaker = observer(() => {
    const store = useStore();
    const onSubmit = ({ name, isFavorite, isSingle }:TFriend, event:React.FormEvent)   => {
      event.preventDefault();
      return store.makeFriend(name, isFavorite, isSingle)
    }
      

  
    return (
    //   <form onSubmit={onSubmit}>
      <form onSubmit={onSubmit}>
        Total friends: {store.friends.length}
        <input type="text" id="name" />
        <input type="checkbox" id="favorite" />
        <input type="checkbox" id="single" />
        <button>추가</button>
      </form>
    )
  })

