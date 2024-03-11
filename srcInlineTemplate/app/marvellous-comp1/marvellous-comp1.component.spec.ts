import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { MarvellousComp1Component } from './marvellous-comp1.component';

describe('MarvellousComp1Component', () => {
  let component: MarvellousComp1Component;
  let fixture: ComponentFixture<MarvellousComp1Component>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ MarvellousComp1Component ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(MarvellousComp1Component);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
