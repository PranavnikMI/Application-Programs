import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { MarvellousComp2Component } from './marvellous-comp2.component';

describe('MarvellousComp2Component', () => {
  let component: MarvellousComp2Component;
  let fixture: ComponentFixture<MarvellousComp2Component>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ MarvellousComp2Component ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(MarvellousComp2Component);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
