import React from 'react';
import { mount } from 'enzyme';
import Profile from './Profile';

describe('<Profile />', () => {
    it('matches snapshot', () => {
        const wrapper = mount(<Profile username="Take Knowledge" name="최재욱" />);
        expect(wrapper).toMatchSnapshot();
    });
    it('renders username and name', () => {
        const wrapper = mount(<Profile username="Take Knowledge" name="최재욱" />);

        expect(wrapper.props().username).toBe('Take Knowledge');
        expect(wrapper.props().name).toBe('최재욱');

        const boldElement = wrapper.find('b');
        expect(boldElement.contains('Take Knowledge')).toBe(true);
        const spanElement = wrapper.find('span');
        expect(spanElement.text()).toBe('(최재욱)')
    });
});