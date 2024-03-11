import { ComponentFixture, TestBed } from '@angular/core/testing';

import { WrongComponent } from './wrong.component';

describe('WrongComponent', () => {
  let component: WrongComponent;
  let fixture: ComponentFixture<WrongComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ WrongComponent ]
    })
    .compileComponents();

    fixture = TestBed.createComponent(WrongComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
