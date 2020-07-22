import React from 'react';
import { render } from '@testing-library/react';
import Profile from './Profile';

describe('<Profile />', () => {
  it('matches snapshot', () => {
    const utils = render(<Profile username="Take Knowledge" name="최재욱" />);
    expect(utils.container).toMatchSnapshot();
  });
  it('shows the props correctly', () => {
    const utils = render(<Profile username="Take Knowledge" name="최재욱" />);
    utils.getByText('Take Knowledge'); // Take Knowledge 라는 텍스트를 가진 엘리먼트가 있는지 확인
    utils.getByText('(최재욱)'); // (최재욱) 이라는 텍스트를 가진 엘리먼트가 있는지 확인
    utils.getByText(/최/); // 정규식 /최/ 를 통과하는 엘리먼트가 있는지 확인
  });
});