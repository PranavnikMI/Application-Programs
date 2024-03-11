import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { InfosystemsComponent } from './infosystems.component';

describe('InfosystemsComponent', () => {
  let component: InfosystemsComponent;
  let fixture: ComponentFixture<InfosystemsComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ InfosystemsComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(InfosystemsComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
